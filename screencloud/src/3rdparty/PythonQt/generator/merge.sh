#!/bin/sh

xsltproc -o typesystem_core.xml --stringparam source 'typesystem_core-qtscript.xml'  merge.xsl typesystem_core-common.xml
xsltproc -o typesystem_gui.xml --stringparam source 'typesystem_gui-qtscript.xml'  merge.xsl typesystem_gui-common.xml
xsltproc -o typesystem_opengl.xml --stringparam source 'typesystem_opengl-qtscript.xml'  merge.xsl typesystem_opengl-common.xml
xsltproc -o typesystem_network.xml --stringparam source 'typesystem_network-qtscript.xml'  merge.xsl typesystem_network-common.xml
xsltproc -o typesystem_xml.xml --stringparam source 'typesystem_xml-qtscript.xml'  merge.xsl typesystem_xml-common.xml
xsltproc -o typesystem_webkit.xml --stringparam source 'typesystem_webkit-qtscript.xml'  merge.xsl typesystem_webkit-common.xml
xsltproc -o typesystem_sql.xml --stringparam source 'typesystem_sql-qtscript.xml'  merge.xsl typesystem_sql-common.xml
xsltproc -o typesystem_svg.xml --stringparam source 'typesystem_svg-qtscript.xml'  merge.xsl typesystem_svg-common.xml
xsltproc -o typesystem_xmlpatterns.xml --stringparam source 'typesystem_xmlpatterns-qtscript.xml'  merge.xsl typesystem_xmlpatterns-common.xml