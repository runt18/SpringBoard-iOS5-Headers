/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBHUDView.h"


@interface SBRotationLockHUDView : SBHUDView {
	BOOL _locked;
	BOOL locked;
}
@property(assign, nonatomic, getter=isLocked) BOOL locked;
-(void)_updateLockedImage;
-(id)init;
@end

