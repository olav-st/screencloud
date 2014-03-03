xsltproc --stringparam source $PWD/typesystem_core-qtscript.xml merge.xsl typesystem_core-common.xml > typesystem_core.xml

xsltproc --stringparam source $PWD/typesystem_gui-qtscript.xml merge.xsl typesystem_gui-common.xml > typesystem_gui.xml

xsltproc --stringparam source $PWD/typesystem_svg-qtscript.xml merge.xsl typesystem_svg-common.xml > typesystem_svg.xml

xsltproc --stringparam source $PWD/typesystem_network-qtscript.xml merge.xsl typesystem_network-common.xml > typesystem_network.xml

xsltproc --stringparam source $PWD/typesystem_opengl-qtscript.xml merge.xsl typesystem_opengl-common.xml > typesystem_opengl.xml

xsltproc --stringparam source $PWD/typesystem_xml-qtscript.xml merge.xsl typesystem_xml-common.xml > typesystem_xml.xml

xsltproc --stringparam source $PWD/typesystem_sql-qtscript.xml merge.xsl typesystem_sql-common.xml > typesystem_sql.xml

xsltproc --stringparam source $PWD/typesystem_phonon-qtscript.xml merge.xsl typesystem_phonon-common.xml > typesystem_phonon.xml

xsltproc --stringparam source $PWD/typesystem_webkit-qtscript.xml merge.xsl typesystem_webkit-common.xml > typesystem_webkit.xml

xsltproc --stringparam source $PWD/typesystem_xmlpatterns-qtscript.xml merge.xsl typesystem_xmlpatterns-common.xml > typesystem_xmlpatterns.xml

# ./generator qtscript_masterinclude.h typesystem_core.xml --diff
