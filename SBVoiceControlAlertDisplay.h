/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSlidingAlertDisplay.h"
#import "SpringBoard-Structs.h"
#import "VSSpeechSynthesizerDelegate.h"
#import "VSRecognitionSessionDelegate.h"

@class UITextField, NSMutableSet, UIView, NSTimer, AVController, NSDictionary, VSRecognitionSession, NSInvocation, NSMutableIndexSet, NSMutableArray;

@interface SBVoiceControlAlertDisplay : SBSlidingAlertDisplay <VSRecognitionSessionDelegate, VSSpeechSynthesizerDelegate> {
	VSRecognitionSession* _session;
	BOOL _wasRecognizing;
	BOOL _didConfigureRouting;
	NSInvocation* _postSoundInvocation;
	UIView* _leftFadeView;
	UIView* _rightFadeView;
	UIView* _labelsView;
	int _clipCount;
	int _currentClipNo;
	BOOL _voiceTranscription;
	UITextField* _textField;
	NSMutableArray* _transcripts;
	NSMutableArray* _voiceClips;
	AVController* _avController;
	NSMutableArray* _waves;
	NSMutableSet* _labels;
	int _keywordCount;
	int _lastKeywordIndex;
	NSTimer* _levelTimer;
	NSMutableIndexSet* _occupiedLabelSlots;
	NSDictionary* _locStrings;
	BOOL _labelsOn;
	BOOL _animatingToCall;
	BOOL _didDismiss;
	BOOL _awaitingButtonRelease;
	BOOL _isBecomingVisible;
	BOOL _labelsHaveDisplayed;
}
+(id)newBottomLockBarForDisplay:(id)display;
+(id)newBottomBarForInstance:(id)instance;
-(id)initWithFrame:(CGRect)frame session:(id)session;
-(BOOL)_wasTriggeredByMenu;
-(void)updateDesktopImage:(id)image;
-(void)dealloc;
-(BOOL)alphanumericKeyboard;
-(id)_localizedStringForKey:(id)key;
-(void)setTitleText:(id)text;
-(void)setStatusText:(id)text;
-(void)alertDisplayWillBecomeVisible;
-(void)alertWillBeDismissed;
-(void)lockBarUnlocked:(id)unlocked;
-(void)setMiddleContentAlpha:(float)alpha;
-(void)_invalidateRouting;
-(void)_notifyDeviceTermination;
-(void)_dismissIfWeHavent;
-(void)_dismissSlightlyLater;
-(void)handleButtonUpCancel;
-(void)handleHeadsetButtonUpFromActivation:(BOOL)activation;
-(id)_desiredRouteDictionary;
-(void)_pickedRouteChanged:(id)changed;
-(void)_configureRoutingIfNecessary;
-(void)_performSoundCompletionAction;
-(BOOL)_attemptPlaySound:(unsigned long)sound synchronously:(BOOL)synchronously;
-(void)_playSound:(unsigned long)sound synchronously:(BOOL)synchronously;
-(void)_startSession;
-(void)_resetSession;
-(BOOL)recognitionSessionWillBeginAction:(id)recognitionSession;
-(void)_continueRecognitionAction;
-(void)recognitionSessionDidBeginAction:(id)recognitionSession;
-(void)_performNoMatchFound;
-(void)_promptUserForVoiceTranscription;
-(void)_mediaPlayerDied;
-(void)_userEnteredTextForVoiceClip:(id)voiceClip;
-(void)_startTrancribeAudio;
-(void)_getAudioClipsFromDirectory;
-(void)_playAudioAtPath:(id)path;
-(void)_exitVoiceTranscriptView;
-(void)recognitionSession:(id)session didCompleteActionWithError:(id)error;
-(void)_finishedFadingToAwayInCallController;
-(void)_animateToAwayInCallController;
-(id)_openTelURL:(id)url;
-(id)_openVideoURL:(id)url;
-(id)recognitionSession:(id)session openURL:(id)url;
-(void)_continueWithRecognitionAction;
-(void)_performConfirmationAction;
-(void)_speakFeedbackText;
-(void)_speakText:(id)text;
-(void)recognitionSession:(id)session didFinishSpeakingFeedbackStringWithError:(id)error;
-(void)_updateLevels;
-(void)_startUpdatingLevels;
-(void)_stopUpdatingLevels;
-(void)_setWaveAlpha:(float)alpha withDuration:(double)duration;
-(int)_keywordCount;
-(void)_startLabelForKeywordAtIndex:(int)index now:(BOOL)now delayStart:(BOOL)start;
-(void)_startKeywordIfNecessary;
-(void)_labelFinishedAnimating:(id)animating finished:(id)finished label:(id)label;
-(void)_startMovingLabels;
-(void)_fadeOutCurrentLabels;
-(void)_stopMovingLabels;
-(void)_keywordsChanged:(id)changed;
@end

