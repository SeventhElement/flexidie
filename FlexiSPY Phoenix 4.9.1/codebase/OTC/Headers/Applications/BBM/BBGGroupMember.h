/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "BBGGenGroupMember.h"

//#import "BBMGroupMemberProtocol-Protocol.h"

@class BBGGroupContact;

@interface BBGGroupMember : BBGGenGroupMember //<BBMGroupMemberProtocol>
{
}

+ (id)keyPathsForValuesAffectingContactIsAdmin;
+ (id)keyPathsForValuesAffectingGroupContact;
@property(readonly) BOOL contactIsAdmin;
@property(readonly) BBGGroupContact *groupContact;

@end

