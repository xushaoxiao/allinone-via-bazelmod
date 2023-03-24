# Benefits and challenges of monorepo development practices

In a single, monolithic repository, also known as a monorepo, you keep all your application and microservice code in the
same source code repository (usually Git). Typically, teams split the code of various app components into subfolders and
use Git workflow for new features or bug fixes. This approach is natural for most applications or systems developed
using a monolithic architecture.

This **monorepo code typically has a single build pipeline that produces the application executable.** Though
maintenance is straightforward, this method reduces overall velocity because a few difficult-to-fix bugs can prevent a
team from deploying release candidates to production.

Let's outlines the differences between monorepos and polyrepos, weights the pros and cons of monorepos, and helps you
determine whether a monorepo is the best choice for your team.

## Monorepo VS. polyrepo for microservices

As microservices architecture becomes more popular, teams tend to split their code into many repositories (polyrepos).
Teams develop microservices independently, using different, problem-specific tools and programming languages. For
example, some developers may use open source projects like Python for artificial intelligence (AI), while others use
Java or .NET to implements APIs.

The advantages of polyrepos are clear. A small team can rapidly implement, and independently deploy, a microservice for
high-velocity software development.

However, **using separate repositories introduces risk.** System knowledge is spread across multiple repos maintained by
different teams. **At some point, you realize that no one knows how to build and deploy the entire system.**

Although polyrepos seem to be the natural choice for microservices, a monorepo with unified and automated build and
deploy pipelines can mitigate many issues. A closer look at the benefits of monorepos -- and some of the misconceptions
-- may help you decide if a monorepo environment is best of your team.

## Benefits of monorepos

The monorepo approach has several advantages:

- **Easy visibility.** If you are working on a microservice that calls other microservices, you can look at the code,
  understand how it works, and determine if bugs are happening in your own code or in another team's microservices.
- **Code sharing.** Teams duplicating code for various microservices causes additional engineering overhead. If common
  models, shared libraries, and helper code are all stored in a single repository, teams can share them among many
  microservices.
- **Improved collaboration.** A monorepo removes barriers and silos between teams, making it easier to design and
  maintain sets of microservices that work well together.
- **Standardization.** With monorepos, it is easier to standardize code and tooling across the teams. You can impose
  branch policies to keep your main branch clean, limit access to specific branches, enforce naming guidelines, include
  code reviewers, and enforce best practice. Branch policies keep in-progress work isolated from completed work.
- **Discoverability.** A monorepo offers a single view of the whole code. You can review status for the whole repository
  screen all branches, and keep track of modifications much more easily in monorepos than in polyrepos.
- **Release management.** A monorepo retains all the information about how to deploy the whole system. An automated
  build and deploy pipeline doesn't hide deployment knowledge within each team the way it does in a polyrepo.
- **Easier refactoring.** Direct access to all microservices makes it easier to refactor the code in a monorepo. Also,
  you can change the code structure. Moving the source code between folders and subforlders is much easier than moving the
  source code between multiple repositories.

## Challenges of monorepos

Despite these benefits, monorepos create several challenges. Changing a common code can impact many application
components, and the source conflicts can be difficult to merge. Your deployment process can be more challenging, and you
need to scale your source control management system.
Depending on your situation, the benefits of monorepos may outweigh their challenges.

## Misconceptions about monorepos

If you have been developing apps in microservices architecture, you may have some misconceptions about monorepos. Some
developers think that multiple programming languages and tools prevent using a single repo due to difficulties in
creating the uniform build process. You can mitigate this by using containers, with each microservice built into the
container image, and then deployed as an individual unit.

Once you have containerized microservices, you can also test them individually. So, instead of keeping all the build
stages in many repositories, you can keep them in the monorepo. The only difference is that your build target is set to
containers.

**Often, developers think monorepos cause tightly-coupled code. Not really, but you must exercise good judgment to
prevent turning code into a tangled mess.**

When developing microservices, you make them independent, so they don't rely on other microservices. You can achieve
this in a monorepo when your team follows best practices and guidelines for microservice development.

This idea is to split a big system into independently deployable, loosely-coupled units that, unlike components,
communicate with each other over the process boundaries (typically using REST APIs). Though the monorepo makes it easy
to break microservice architecture patterns, it does not cause tightly-coupled code by itself.

You should update microservices independently, but you may think this is impossible with a monorepo. Meet this challenge
by replacing rolling updates with more advanced deployment strategies, like blue-green or canary. You can deploy the new
version side by side with the previous version while you ensure the new microservice version works as expected. If you
detect a bug, you can quickly redirect traffic to the previous version.

Automated continuous integration and continuous deployment (CI/CD) pipelines help with all those monorepo challenges.
Each development team can independently work the microservice, build its container image, and deploy it without
affecting other teams. They can validate the microservice in a test environment before sending it into production, and 
keep both the old and new versions available.

**Containerization lets you deploy and test microservices independently without worrying about their different tools and
programming languages.**

CI/CD tools can scale automatically and help you manage complex deployments so that you can build, test, and even deploy
individual microservices from within a larger monorepo.

## Deciding on a strategy that works for your team

How do you decide whether to use a monorepo or polyrepo for your microservices development?  

**First, assess your team's culture**: is it a good fit for the collaborative development a monorepo encourages?
**Second, assess your team's discipline**: will they be able to refrain from creating tightly-coupled code?  

They need to avoid making their microservices dependent on other microservices in the monorepo. Remember, you can 
enforce this discipline with branch policies and permission restrictions, controlling who can deploy microservices to 
production. Permissions determine which teams and team members can deploy each service.

You can put all these practices into place with a unified, automated CI/CD pipeline where your team builds, tests, and 
deploys individual microservices from within a larger monorepo. Automating your pipeline makes it easier to manage your 
monorepo while keeping up your rapid deployment pace.

## Conclusion

Monorepos have many advantage, like visibility, collaboration, and code sharing, but they are not the right fit for 
every team. Understand your team's strengths and weaknesses to determine if a monorepo is the right choice.

If you decide to use a monorepo, maintain your high-velocity software deployment and mitigate common microservices 
pitfalls with a unified and automated CI/CD pipeline.
