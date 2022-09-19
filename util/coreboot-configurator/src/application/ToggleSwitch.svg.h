/* SPDX-License-Identifier: GPL-2.0-only */

#pragma once

/* Embed SVG files into code as debian packages does weird things when svgs are included as qrc */
namespace ToggleSwitchSVG {
static constexpr char s_toggledOnContent[] =
    "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n"
    "<svg\n"
    "   xmlns:dc=\"http://purl.org/dc/elements/1.1/\"\n"
    "   xmlns:cc=\"http://creativecommons.org/ns#\"\n"
    "   xmlns:rdf=\"http://www.w3.org/1999/02/22-rdf-syntax-ns#\"\n"
    "   xmlns:svg=\"http://www.w3.org/2000/svg\"\n"
    "   xmlns=\"http://www.w3.org/2000/svg\"\n"
    "   xmlns:sodipodi=\"http://sodipodi.sourceforge.net/DTD/sodipodi-0.dtd\"\n"
    "   xmlns:inkscape=\"http://www.inkscape.org/namespaces/inkscape\"\n"
    "   inkscape:version=\"1.0rc1 (1.0rc1+100)\"\n"
    "   sodipodi:docname=\"toggle-on.svg\"\n"
    "   id=\"svg6\"\n"
    "   version=\"1.1\"\n"
    "   viewBox=\"0 0 40 20\"\n"
    "   height=\"20\"\n"
    "   width=\"40\">\n"
    "  <metadata\n"
    "     id=\"metadata12\">\n"
    "    <rdf:RDF>\n"
    "      <cc:Work\n"
    "         rdf:about=\"\">\n"
    "        <dc:format>image/svg+xml</dc:format>\n"
    "        <dc:type\n"
    "           rdf:resource=\"http://purl.org/dc/dcmitype/StillImage\" />\n"
    "      </cc:Work>\n"
    "    </rdf:RDF>\n"
    "  </metadata>\n"
    "  <defs\n"
    "     id=\"defs10\" />\n"
    "  <sodipodi:namedview\n"
    "     inkscape:current-layer=\"svg6\"\n"
    "     inkscape:window-maximized=\"1\"\n"
    "     inkscape:window-y=\"28\"\n"
    "     inkscape:window-x=\"65\"\n"
    "     inkscape:cy=\"10\"\n"
    "     inkscape:cx=\"20.062112\"\n"
    "     inkscape:zoom=\"32.2\"\n"
    "     showgrid=\"false\"\n"
    "     id=\"namedview8\"\n"
    "     inkscape:window-height=\"1020\"\n"
    "     inkscape:window-width=\"1855\"\n"
    "     inkscape:pageshadow=\"2\"\n"
    "     inkscape:pageopacity=\"0\"\n"
    "     guidetolerance=\"10\"\n"
    "     gridtolerance=\"10\"\n"
    "     objecttolerance=\"10\"\n"
    "     borderopacity=\"1\"\n"
    "     bordercolor=\"#666666\"\n"
    "     pagecolor=\"#ffffff\" />\n"
    "  <rect\n"
    "     style=\"fill:#0068bf;fill-opacity:1\"\n"
    "     id=\"rect2\"\n"
    "     fill=\"#1a73e8\"\n"
    "     ry=\"8\"\n"
    "     height=\"16\"\n"
    "     width=\"36\"\n"
    "     y=\"2\"\n"
    "     x=\"2\" />\n"
    "  <circle\n"
    "     id=\"circle4\"\n"
    "     fill=\"#ffffff\"\n"
    "     r=\"6\"\n"
    "     cy=\"10\"\n"
    "     cx=\"30\" />\n"
    "</svg>\n";
static constexpr char s_toggledOffContent[] =
    "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"40\" height=\"20\" viewBox=\"0 0 40 20\">\n"
    "  <rect x=\"2\" y=\"2\" width=\"36\" height=\"16\" ry=\"8\" fill=\"#000000\" fill-opacity=\".26\"/>\n"
    "  <circle cx=\"10\" cy=\"10\" r=\"6\" fill=\"#ffffff\"/>\n"
    "</svg>";
}
