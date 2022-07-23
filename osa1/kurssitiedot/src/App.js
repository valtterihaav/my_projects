
const Header = (props) =>
{
  return (
    <div>
      <h1>{props.kurssi}</h1>
    </div>
  )
}

const Content = (props) =>
{
  return(
    <div>
      <Part name={props.osa1} count={props.exe1}/>
      <Part name={props.osa2} count={props.exe2}/>
      <Part name={props.osa3} count={props.exe3}/>
    </div>
  )
}

const Part = (props) =>
{
  return (
    <div>
      <p>{props.name} {props.count}</p>
    </div>
  )
}

const Total = (props) =>
{
  return (
    <div>
      <p> Number of exercises {props.ex1 + props.ex2 + props.ex3}</p>
    </div>
  )
}

const App = () => 
{
  const course = 'Half Stack application development'
  const part1 = 'Fundamentals of React'
  const exercises1 = 10
  const part2 = 'Using props to pass data'
  const exercises2 = 7
  const part3 = 'State of a component'
  const exercises3 = 14

  return (
    <div>
        <Header kurssi={course}/>
        <Content osa1={part1} osa2={part2} osa3={part3} 
        exe1={exercises1} exe2={exercises2} exe3={exercises3}/>
        <Total ex1={exercises1} ex2={exercises2} ex3={exercises3}/>
    </div>
  )
}

export default App
