<div id="container">
<div id="header">
<!--#if expr="$link_settings" -->
<h1><gettext>Schulkonsole f&uuml;r Netzwerkberater/innen</gettext></h1>
<!--#else -->
    <!--#if expr="$link_class" -->
<h1><gettext>Schulkonsole f&uuml;r Lehrer/innen</gettext></h1>
    <!--#else -->
        <!--#if expr="$link_start" -->
<h1><gettext>Schulkonsole f&uuml;r Sch&uuml;ler/innen</gettext></h1>
        <!--#else -->
<h1><gettext>Schulkonsole</gettext></h1>
        <!--#endif -->
    <!--#endif -->
<!--#endif -->
<gettext>Version</gettext> <!--#echo var="version" -->
<!--#echo var="action" -->
</div>
</div>

<!--#include file="menu.shtml.inc" -->

