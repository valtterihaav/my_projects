
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
  const part1 = {
    name: 'Fundamentals of React',
    exercises: 10
  }
  const part2 = {
    name: 'Using props to pass data',
    exercises: 7
  }
  const part3 = {
    name: 'State of a component',
    exercises: 14
  }

  return (
    <div>
        <Header kurssi={course}/>
        <Content osa1={part1.name} osa2={part2.name} osa3={part3.name} 
        exe1={part1.exercises} exe2={part2.exercises} exe3={part3.exercises}/>
        <Total ex1={part1.exercises} ex2={part2.exercises} ex3={part3.exercises}/>
    </div>
  )
}

export default App
