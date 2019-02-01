// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var ReasonReact = require("reason-react/src/ReasonReact.js");

var component = ReasonReact.statelessComponent("BreadCrumb");

function make(param) {
  return /* record */[
          /* debugName */component[/* debugName */0],
          /* reactClassInternal */component[/* reactClassInternal */1],
          /* handedOffState */component[/* handedOffState */2],
          /* willReceiveProps */component[/* willReceiveProps */3],
          /* didMount */component[/* didMount */4],
          /* didUpdate */component[/* didUpdate */5],
          /* willUnmount */component[/* willUnmount */6],
          /* willUpdate */component[/* willUpdate */7],
          /* shouldUpdate */component[/* shouldUpdate */8],
          /* render */(function (param) {
              return React.createElement("ol", {
                          className: "breadcrumb"
                        }, React.createElement("li", undefined, React.createElement("a", {
                                  href: "#"
                                }, React.createElement("i", {
                                      className: "fa fa-dashboard"
                                    }), "Home")), React.createElement("li", {
                              className: "active"
                            }, "Dashboard"));
            }),
          /* initialState */component[/* initialState */10],
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */component[/* reducer */12],
          /* jsElementWrapped */component[/* jsElementWrapped */13]
        ];
}

var BreadCrumb = /* module */[
  /* component */component,
  /* make */make
];

var component$1 = ReasonReact.statelessComponent("Header");

function make$1(titleHeader, _children) {
  return /* record */[
          /* debugName */component$1[/* debugName */0],
          /* reactClassInternal */component$1[/* reactClassInternal */1],
          /* handedOffState */component$1[/* handedOffState */2],
          /* willReceiveProps */component$1[/* willReceiveProps */3],
          /* didMount */component$1[/* didMount */4],
          /* didUpdate */component$1[/* didUpdate */5],
          /* willUnmount */component$1[/* willUnmount */6],
          /* willUpdate */component$1[/* willUpdate */7],
          /* shouldUpdate */component$1[/* shouldUpdate */8],
          /* render */(function (_self) {
              return React.createElement("section", {
                          className: "content-header"
                        }, React.createElement("h1", undefined, titleHeader), ReasonReact.element(undefined, undefined, make(/* array */[])));
            }),
          /* initialState */component$1[/* initialState */10],
          /* retainedProps */component$1[/* retainedProps */11],
          /* reducer */component$1[/* reducer */12],
          /* jsElementWrapped */component$1[/* jsElementWrapped */13]
        ];
}

var Header = /* module */[
  /* component */component$1,
  /* make */make$1
];

var component$2 = ReasonReact.statelessComponent("PanelContent");

function make$2(param) {
  return /* record */[
          /* debugName */component$2[/* debugName */0],
          /* reactClassInternal */component$2[/* reactClassInternal */1],
          /* handedOffState */component$2[/* handedOffState */2],
          /* willReceiveProps */component$2[/* willReceiveProps */3],
          /* didMount */component$2[/* didMount */4],
          /* didUpdate */component$2[/* didUpdate */5],
          /* willUnmount */component$2[/* willUnmount */6],
          /* willUpdate */component$2[/* willUpdate */7],
          /* shouldUpdate */component$2[/* shouldUpdate */8],
          /* render */(function (_self) {
              return React.createElement("div", {
                          className: "content-wrapper",
                          style: {
                            minHeight: "100vh"
                          }
                        }, ReasonReact.element(undefined, undefined, make$1("Dashboard", /* array */[])), React.createElement("section", {
                              className: "content"
                            }, React.createElement("div", {
                                  className: "row"
                                })));
            }),
          /* initialState */component$2[/* initialState */10],
          /* retainedProps */component$2[/* retainedProps */11],
          /* reducer */component$2[/* reducer */12],
          /* jsElementWrapped */component$2[/* jsElementWrapped */13]
        ];
}

var PanelContent = /* module */[
  /* component */component$2,
  /* make */make$2
];

exports.BreadCrumb = BreadCrumb;
exports.Header = Header;
exports.PanelContent = PanelContent;
/* component Not a pure module */
