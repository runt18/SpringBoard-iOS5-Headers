/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIUserAgent.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBBulletinAlertHandlerRegistry;

@interface SBUserAgent : XXUnknownSuperclass <SBUIUserAgent> {
	SBBulletinAlertHandlerRegistry* _modalAlertRegistry;
}
+(id)sharedUserAgent;
-(id)init;
-(void)dealloc;
-(void)updateInterfaceOrientationIfNecessary;
-(int)activeInterfaceOrientation;
-(id)foregroundApplicationDisplayID;
-(id)foregroundDisplayID;
-(id)topSuspendedEventsOnlyDisplayID;
-(BOOL)deviceIsLocked;
-(BOOL)lockScreenIsShowing;
-(BOOL)homeScreenIsDisplayingWallpaper;
-(BOOL)springBoardIsActive;
-(void)setFlipBackAttributeForSEODisplayWithIdentifier:(id)identifier;
-(BOOL)launchDisplayWithURL:(id)url forCall:(BOOL)call sender:(id)sender;
-(BOOL)canUserLaunchIcon;
-(id)createWallpaperView:(int)view;
-(void)openURL:(id)url animateIn:(BOOL)anIn scale:(float)scale start:(double)start duration:(float)duration animateOut:(BOOL)anOut;
-(BOOL)_openURL:(id)url allowUnlock:(BOOL)unlock animated:(BOOL)animated activationFlag:(unsigned)flag;
-(BOOL)openURL:(id)url allowUnlock:(BOOL)unlock animated:(BOOL)animated;
-(BOOL)canLaunchFromBulletinWithURL:(id)url bundleID:(id)anId;
-(BOOL)launchFromBulletinWithURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate launchOrigin:(int)origin;
-(BOOL)launchFromPushOrLocalBulletin:(id)pushOrLocalBulletin origin:(int)origin;
-(void)dimScreen:(BOOL)screen;
-(void)setBadgeNumberOrString:(id)string forApplicationWithID:(id)anId;
-(void)setIdleText:(id)text;
-(int)networkUsageTypeForAppWithDisplayID:(id)displayID;
-(void)playRingtoneAtPath:(id)path;
-(void)playRingtoneAtPath:(id)path vibrationPattern:(id)pattern;
-(void)stopRinging;
-(void)prepareToAnswerCall;
-(id)modalBulletinAlertHandlerRegistry;
-(BOOL)isSBUILoggingEnabled;
@end

