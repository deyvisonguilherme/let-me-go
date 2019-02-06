module BreadCrumb = {
    let component = ReasonReact.statelessComponent("BreadCrumb");
    let make = _ => {
        ...component,
        render: _=>
            <ol className="breadcrumb">
                <li><a href="#"><i className="fa fa-dashboard"></i>(ReasonReact.string("Home"))</a></li>
                <li className="active">(ReasonReact.string("Dashboard"))</li>
            </ol>,
    };
};

module Header = {
    let component = ReasonReact.statelessComponent("Header");
    let make = (~titleHeader, _children) => {
        ...component,
        render: _self => 
            <section className="content-header">
                <h1>(ReasonReact.string(titleHeader))</h1>
                <BreadCrumb />
            </section>,
    };
};


let component = ReasonReact.statelessComponent("ContentWrapper");
let make = (children)=> {
    ...component,
    render: _self => 
        <div className="content-wrapper" style=(ReactDOMRe.Style.make(~minHeight= "100vh", ()))>
        <Header titleHeader="Dashboard" />
            <section className="content container-fluid">
            ...children
            </section>
        </div>,
};