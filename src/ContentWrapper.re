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

module PanelContent = {
    let component = ReasonReact.statelessComponent("PanelContent");
    let make = _=> {
        ...component,
        render: _self => 
            <div className="content-wrapper" style=(ReactDOMRe.Style.make(~minHeight= "100vh", ()))>
            <Header titleHeader="Dashboard" />
                <section className="content">
                    <div className="row"></div>
                </section>
            </div>,
    };
};


/* module Box = {
    let component = ReasonReact.statelessComponent("Box");
    let make = (_children) => {
        render: _self => 
    };
} */
