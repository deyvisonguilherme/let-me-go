// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var ReactDOMRe = require("reason-react/src/ReactDOMRe.js");
var ReasonReact = require("reason-react/src/ReasonReact.js");
var Simple$ReactTemplate = require("./Simple.bs.js");
var Greeting$ReactTemplate = require("./Greeting.bs.js");
var Component1$ReactTemplate = require("./Component1.bs.js");
var Component2$ReactTemplate = require("./Component2.bs.js");

((require('./main.js')));

ReactDOMRe.renderToElementWithId(ReasonReact.element(undefined, undefined, Component1$ReactTemplate.make("Hello! Click this text.", /* array */[])), "index1");

ReactDOMRe.renderToElementWithId(ReasonReact.element(undefined, undefined, Component2$ReactTemplate.make("Hello!", /* array */[])), "index2");

ReactDOMRe.renderToElementWithId(ReasonReact.element(undefined, undefined, Simple$ReactTemplate.make("Hello", /* array */[])), "index3");

ReactDOMRe.renderToElementWithId(ReasonReact.element(undefined, undefined, Greeting$ReactTemplate.make("Deyvison Guilherme!", /* array */[])), "index4");

/*  Not a pure module */
