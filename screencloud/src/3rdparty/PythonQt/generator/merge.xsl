<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                version="1.0">
  <xsl:output method="xml" indent="yes"/>
  <xsl:param name="lang" />   
  <xsl:param name="source" />   

  <xsl:template match="processing-instruction()" />
  
  <xsl:template match="/typesystem">
    <xsl:copy>
      <xsl:for-each select="@*">
        <xsl:copy>
          <xsl:value-of select="." />
        </xsl:copy>
      </xsl:for-each>

      <xsl:for-each select="document($source)/typesystem/@*">
        <xsl:copy>
          <xsl:value-of select="." />
        </xsl:copy>
      </xsl:for-each>
  
      <xsl:variable name="other" select="document($source)/typesystem/*[not(self::object-type | self::value-type | self::interface-type | self::namespace-type)]" />  
      <xsl:if test="$other">
          <xsl:choose>
          <xsl:when test="$lang != ''">
            <xsl:element name="language">
              <xsl:attribute name="name" ><xsl:value-of select="$lang" /></xsl:attribute>
              <xsl:copy-of select="$other" />
            </xsl:element>
          </xsl:when>
          <xsl:otherwise>
             <xsl:copy-of select="$other" />
          </xsl:otherwise>
        </xsl:choose>
      </xsl:if>

      <xsl:apply-templates select="node()" />
      
    </xsl:copy>
  </xsl:template>



  <xsl:template match="/typesystem/*[self::object-type | self::value-type | self::interface-type | self::namespace-type]">
    <xsl:variable name="name" select="name()" />
    <xsl:copy>
      <xsl:for-each select="@*">
        <xsl:copy>
          <xsl:value-of select="." />
        </xsl:copy>
      </xsl:for-each>

      <xsl:apply-templates select="node()" />
      
      <xsl:variable name="other" select="document($source)/typesystem/*[name() = $name][@name = current()/@name]" />
      <xsl:if test="$other">
        <xsl:choose>
          <xsl:when test="$lang != ''">
          <xsl:element name="language">
            <xsl:attribute name="name" ><xsl:value-of select="$lang" /></xsl:attribute>
            <xsl:copy-of select="$other/node()" />  
          </xsl:element>
          </xsl:when>
          <xsl:otherwise>
            <xsl:copy-of select="$other/node()" />
          </xsl:otherwise>
        </xsl:choose>
      </xsl:if>
    </xsl:copy>
  </xsl:template>

  <!-- Plain identity transform. -->
  <xsl:template match="@*|node()">
    <xsl:copy>
      <xsl:apply-templates select="@*"/>
      <xsl:apply-templates select="node()"/>
    </xsl:copy>
  </xsl:template>

</xsl:stylesheet>
