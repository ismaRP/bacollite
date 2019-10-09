





#' get the hits for a range of correlation limit values
#'
#' @param cd list of outputs from the ms_fit function for a set of peptides
#' @param corlim a sequence of correlation limit values for thresholding the data
#' @param laglim maximum acceptable value of lag for each correlation
#' @keywords bruker
#' @export
corlim_plot <- function(psample,pnpep,pcld,presult,pnames,manname="unknown",pcols=c("green","red","blue","black"),warn=T){


  calcid = presult$id[presult$score == max(presult$score)]
  if(length(calcid)>1)
    calcid = "unknown"


  title = sprintf("Sample '%s': manual ID: '%s'; Calc ID: '%s'\nscores ",psample$name,manname,calcid)

  for(ss in 1:nrow(result)){
    title = sprintf("%s %s = %0.3f",title,presult$id[ss],presult$score[ss])
  }

  par(mar = c(4,4,5,4))
  plot(NA,xlab="Correlation Threshold",ylab = "Number of Hits",ylim=c(0,15),xlim = c(0,1))

  maincol="black"

  if(warn)
    if(manname != presult$id[presult$score == max(presult$score)])
      maincol="red"

  title(main = title,col.main=maincol)

  for(ss in 1:length(cld)){

    points(x=corlim,y=pcld[[ss]]$nh,col=pcols[ss])
    lines(x=corlim,y=pcld[[ss]]$nh,col=pcols[ss])

  }

  legend("topright",legend = corlab,col=c("green","red","blue","black"),lty = 1,pch=1)

}