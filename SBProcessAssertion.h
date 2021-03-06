/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, SBProcess, NSString;

@interface SBProcessAssertion : XXUnknownSuperclass {
	unsigned _clientPort;
	unsigned _reason;
	NSString* _identifier;
	SBProcess* _process;
	NSLock* _lock;
	int _ownerPID;
	unsigned _powerAssertionID;
	unsigned _preventSuspend : 1;
	unsigned _preventThrottleDownCPU : 1;
	unsigned _preventThrottleDownUI : 1;
	unsigned _preventIdleSleep : 1;
}
@property(retain, nonatomic) NSString* identifier;
@property(readonly, assign) int ownerPID;
@property(readonly, assign) unsigned clientPort;
@property(readonly, assign) unsigned reason;
@property(readonly, assign) SBProcess* process;
@property(assign) BOOL preventIdleSleep;
@property(assign) BOOL preventThrottleDownUI;
@property(assign) BOOL preventThrottleDownCPU;
@property(assign) BOOL preventSuspend;
@property(readonly, assign) BOOL hasFixedStartTime;
@property(readonly, assign, getter=isTimeLimited) BOOL timeLimited;
@property(readonly, assign) double permittedBackgroundDuration;
-(id)initWithProcess:(id)process reason:(unsigned)reason identifier:(id)identifier;
-(id)initWithMachPort:(unsigned)machPort process:(id)process ownerPID:(int)pid reason:(unsigned)reason identifier:(id)identifier;
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(unsigned)flags;
-(void)setFlags:(unsigned)flags;
-(void)setProcessToNil;
-(void)removeFromProcess;
-(void)nts_createPowerAssertionEnabled;
-(void)nts_destroyPowerAssertionEnabled;
-(void)nts_setPreventIdleSleep:(BOOL)sleep;
@end

