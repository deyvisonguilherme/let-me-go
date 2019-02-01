
let component = ReasonReact.statelessComponent("MainHeader");

let make = (_) => {
  ...component,
  render: _self =>
        <header className="main-header">
            <a href="/" className="logo">
              <span className="logo-mini">(ReasonReact.string("ADMIN"))</span>
              <span className="logo-lg">(ReasonReact.string("AdminLTE"))</span>
            </a>

            <nav className="navbar navbar-static-top" role="navigation">
            <a href="#" className="sidebar-toggle" role="button">
              <span className="sr-only">(ReasonReact.string("Toggle navigation"))</span>
            </a>

              <div className="navbar-custom-menu">

                <ul className="nav navbar-nav">
                   <li className="dropdown messages-menu">
                     <a href="#" className="dropdown-toggle">
                      <i className="fa fa-envelope-o"></i>
                        <span className="label label-success"></span>
                     </a>
                   </li>

                   <li className="dropdown notifications-menu">
                      <a href="#" className="dropdown-toggle">
                        <i className="fa fa-bell-o"></i>
                        <span className="label label-warning"></span>
                      </a>

                      <ul className="dropdown-menu">
                        <li className="header">(ReasonReact.string("You have 10 notifications"))</li>
                        <li>

                          <ul className="menu">
                            <li>
                              <a href="#">
                                <i className="fa fa-users text-aqua"></i>(ReasonReact.string("5 new members joined today"))
                              </a>
                            </li>
                          </ul>

                        </li>
                        <li className="footer"><a href="#">(ReasonReact.string("View all"))</a></li>
                      </ul>

                    </li>

                    <li className="dropdown tasks-menu">
                        <a href="#" className="dropdown-toggle">
                          <i className="fa fa-flag-o"></i>
                          <span className="label label-danger">(ReasonReact.string("9"))</span>
                        </a>
                        <ul className="dropdown-menu">
                          <li className="header">(ReasonReact.string("You have 9 tasks"))</li>
                          <li>
                            <ul className="menu">
                              <li>
                                <a href="#">

                                  <h3>
                                    (ReasonReact.string("Design some buttons"))
                                    <small className="pull-right">(ReasonReact.string("20"))</small>
                                  </h3>
                                  <div className="progress xs">
                                    <div className="progress-bar progress-bar-aqua" style=(ReactDOMRe.Style.make(~width="20%",())) role="progressbar">
                                      <span className="sr-only">(ReasonReact.string("20% Complete"))</span>
                                    </div>
                                  </div>
                                </a>
                              </li>
                            </ul>
                          </li>
                          <li className="footer">
                            <a href="#">(ReasonReact.string("View all tasks"))</a>
                          </li>
                        </ul>
                      </li>


                      <li className="dropdown user user-menu">
                          <a href="#" className="dropdown-toggle">
                            <img src="dist/img/user2-160x160.jpg" className="user-image" alt="User Image" />
                            <span className="hidden-xs">(ReasonReact.string("Deyvison Guilherme"))</span>
                          </a>
                          <ul className="dropdown-menu">
                            <li className="user-header">
                              <img src="dist/img/user2-160x160.jpg" className="img-circle" alt="User Image" />

                              <p>
                              (ReasonReact.string("Deyvison Guilherme"))
                                <small>(ReasonReact.string("Member since Nov. 2012"))</small>
                              </p>
                            </li>
                            <li className="user-body">
                              <div className="row">
                                <div className="col-xs-4 text-center">
                                  <a href="#">(ReasonReact.string("Followers"))</a>
                                </div>
                                <div className="col-xs-4 text-center">
                                  <a href="#">(ReasonReact.string("Sales"))</a>
                                </div>
                                <div className="col-xs-4 text-center">
                                  <a href="#">(ReasonReact.string("Friends"))</a>
                                </div>
                              </div>
                            </li>
                            <li className="user-footer">
                              <div className="pull-left">
                                <a href="#" className="btn btn-default btn-flat">(ReasonReact.string("Profile"))</a>
                              </div>
                              <div className="pull-right">
                                <a href="#" className="btn btn-default btn-flat">(ReasonReact.string("Sign out"))</a>
                              </div>
                            </li>
                          </ul>
                        </li>
                </ul>

              </div>
            </nav>
        </header>
};
