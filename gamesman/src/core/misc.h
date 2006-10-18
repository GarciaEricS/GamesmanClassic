
#ifndef GMCORE_MISC_H
#define GMCORE_MISC_H

void		FreeMoveList			(MOVELIST* ptr);
void		FreeRemotenessList		(REMOTENESSLIST* ptr);
void		FreePositionList		(POSITIONLIST* ptr);
void		FreeValueMoves			(VALUE_MOVES* ptr);
void		FreeTierList			(TIERLIST* ptr);
void		FreeUndoMoveList		(UNDOMOVELIST* ptr);

BOOLEAN		ValidMove			(POSITION pos, MOVE move);

int		GetRandomNumber			(int max);
int		GetSmallRandomNumber		(int n);
int		randSafe			();

unsigned int	Stopwatch			();
void		ExitStageRight			();
void		ExitStageRightErrorString	(STRING msg);

GENERIC_PTR	SafeMalloc			(size_t amt);
GENERIC_PTR	SafeRealloc			(GENERIC_PTR ptr, size_t amount);
void		SafeFree			(GENERIC_PTR ptr);
void		BadElse				(STRING function);

MOVELIST*	CreateMovelistNode		(MOVE move, MOVELIST* tail);
MOVELIST*	CopyMovelist			(MOVELIST* list);

POSITIONLIST*	StorePositionInList		(POSITION pos, POSITIONLIST* tail);
POSITIONLIST*	CopyPositionList		(POSITIONLIST* list);

void		AddPositionToQueue		(POSITION pos, POSITIONQUEUE** tail);
POSITION	RemovePositionFromQueue		(POSITIONQUEUE** head);

REMOTENESSLIST* CreateRemotenesslistNode        (REMOTENESS theRemoteness, REMOTENESSLIST* theNextRemoteness);
REMOTENESSLIST* CopyRemotenesslist              (REMOTENESSLIST* theRemotenesslist);

TIERLIST*	CreateTierlistNode		(TIER theTier, TIERLIST* theNextTier);
TIERLIST*	ReverseTierlist			(TIERLIST* theTierlist);
TIERLIST*	MoveToFrontOfTierlist	(TIER theTier, TIERLIST* theTierlist);
BOOLEAN		TierInList				(TIER theTier, TIERLIST* theTierlist);

UNDOMOVELIST*	CreateUndoMovelistNode		(UNDOMOVE theUndoMove, UNDOMOVELIST* theNextUndoMove);

void		FoundBadPosition		(POSITION pos, POSITION parent, MOVE move);

BOOLEAN		DefaultGoAgain			(POSITION pos, MOVE move);
POSITION	GetNextPosition			();		// TODO: Move to solve

MEXCALC		MexAdd				(MEXCALC calc, MEX mex);
MEX		MexCompute			(MEXCALC calc);
MEXCALC		MexCalcInit			(void);

void		MexFormat			(POSITION pos, STRING str);
MEX		MexPrimitive			(VALUE value);

STRING get_var_string();

#endif /* GMCORE_MISC_H */
