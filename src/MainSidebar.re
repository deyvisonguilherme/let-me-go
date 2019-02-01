let component = ReasonReact.statelessComponent("MainSidebar");
let make = (_) => {
    ...component,
    render: _=>
        <aside className="main-sidebar">
            <section className="sidebar">
                <div className="user-panel">
                    <div className="pull-left image">
                        <img src="dist/img/user2-160x160.jpg" className="img-circle" alt="User Image" />
                    </div>

                    <div className="pull-left info">
                        <p>(ReasonReact.string("Alexander Pierce"))</p>
                        <a href="#"><i className="fa fa-circle text-success"></i>(ReasonReact.string("Online"))</a>
                    </div>
                </div>

            <form action="#" method="get" className="sidebar-form">
                <div className="input-group">
                    <input type_="text" name="q" className="form-control" placeholder="Search..." />
                    <span className="input-group-btn">
                        <button type_="submit" name="search" id="search-btn" className="btn btn-flat"><i className="fa fa-search"></i></button>
                    </span>
                </div>
            </form>

            <ul className="sidebar-menu tree">
                <li className="header">(ReasonReact.string("HEADER"))</li>
                <li className="active"><a href="#"><i className="fa fa-link"></i> <span>(ReasonReact.string("Link"))</span></a></li>
                <li><a href="#"><i className="fa fa-link"></i> <span>(ReasonReact.string("Another Link"))</span></a></li>
                <li className="treeview">
                <a href="#"><i className="fa fa-link"></i> <span>(ReasonReact.string("Multilevel"))</span>
                    <span className="pull-right-container">
                        <i className="fa fa-angle-left pull-right"></i>
                    </span>
                </a>
                <ul className="treeview-menu">
                    <li><a href="#">(ReasonReact.string("Link in level 2"))</a></li>
                    <li><a href="#">(ReasonReact.string("Link in level 2"))</a></li>
                </ul>
                </li>
            </ul>
    </section>
  </aside>,
}