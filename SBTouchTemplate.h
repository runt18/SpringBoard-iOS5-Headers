/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBPolygon;

@interface SBTouchTemplate : XXUnknownSuperclass {
	SBPolygon* m_template;
	SBPolygon* m_candidate;
	unsigned m_transformType;
	float m_acceptFactor;
}
@property(assign, nonatomic) unsigned transformType;
@property(assign, nonatomic) float acceptFactor;
@property(readonly, assign, nonatomic) unsigned pointCount;
-(id)initWithPoints:(CGPoint*)points count:(unsigned)count;
-(void)dealloc;
-(BOOL)acceptPoints:(CGPoint*)points count:(unsigned)count;
-(BOOL)acceptPolygon:(id)polygon;
@end

