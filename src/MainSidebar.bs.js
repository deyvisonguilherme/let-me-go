// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var ReasonReact = require("reason-react/src/ReasonReact.js");

var component = ReasonReact.statelessComponent("MainSidebar");

function make(nameUser, statusLogin, _children) {
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
          /* render */(function (_self) {
              return React.createElement("aside", {
                          className: "main-sidebar"
                        }, React.createElement("section", {
                              className: "sidebar"
                            }, React.createElement("div", {
                                  className: "user-panel"
                                }, React.createElement("div", {
                                      className: "pull-left image"
                                    }, React.createElement("img", {
                                          className: "img-circle",
                                          alt: "User Image",
                                          src: "https://upload.wikimedia.org/wikipedia/en/thumb/c/ce/User-info.svg/1024px-User-info.svg.png"
                                        })), React.createElement("div", {
                                      className: "pull-left info"
                                    }, React.createElement("p", undefined, nameUser), React.createElement("a", {
                                          href: "#"
                                        }, React.createElement("i", {
                                              className: "fa fa-circle text-success"
                                            }), statusLogin))), React.createElement("form", {
                                  className: "sidebar-form",
                                  action: "#",
                                  method: "get"
                                }, React.createElement("div", {
                                      className: "input-group"
                                    }, React.createElement("input", {
                                          className: "form-control",
                                          name: "q",
                                          placeholder: "Search...",
                                          type: "text"
                                        }), React.createElement("span", {
                                          className: "input-group-btn"
                                        }, React.createElement("button", {
                                              className: "btn btn-flat",
                                              id: "search-btn",
                                              name: "search",
                                              type: "submit"
                                            }, React.createElement("i", {
                                                  className: "fa fa-search"
                                                }))))), React.createElement("ul", {
                                  className: "sidebar-menu tree"
                                }, React.createElement("li", {
                                      className: "header"
                                    }, "MAIN NAVIGATION"), React.createElement("li", {
                                      className: "active treeview menu-open"
                                    }, React.createElement("a", {
                                          href: "#"
                                        }, React.createElement("i", {
                                              className: "fa fa-dashboard"
                                            }), React.createElement("span", undefined, "Dashboard"), React.createElement("span", {
                                              className: "pull-right-container"
                                            }, React.createElement("i", {
                                                  className: "fa fa-angle-left pull-right"
                                                }))), React.createElement("ul", {
                                          className: "treeview-menu"
                                        }, React.createElement("li", undefined, React.createElement("a", {
                                                  href: "index.html"
                                                }, React.createElement("i", {
                                                      className: "fa fa-circle-o"
                                                    }), "Dashboard v1")), React.createElement("li", {
                                              className: "active"
                                            }, React.createElement("a", {
                                                  href: "index2.html"
                                                }, React.createElement("i", {
                                                      className: "fa fa-circle-o"
                                                    }), "Dashboard v2")))))));
            }),
          /* initialState */component[/* initialState */10],
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */component[/* reducer */12],
          /* jsElementWrapped */component[/* jsElementWrapped */13]
        ];
}

exports.component = component;
exports.make = make;
/* component Not a pure module */
