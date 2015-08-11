<div id="container">
<div id="header">
[% IF link_settings %]
<h1><gettext>Schulkonsole f&uuml;r Netzwerkberater/innen</gettext></h1>
[% ELSIF link_class %]
<h1><gettext>Schulkonsole f&uuml;r Lehrer/innen</gettext></h1>
[% ELSIF link_start %]
<h1><gettext>Schulkonsole f&uuml;r Sch&uuml;ler/innen</gettext></h1>
[% ELSE %]
<h1><gettext>Schulkonsole</gettext></h1>
[% END %]
<gettext>Version</gettext> [% version %]
[% action %]
</div>
</div>

[% INCLUDE menu.shtml.inc %]

