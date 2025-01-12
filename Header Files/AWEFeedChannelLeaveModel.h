//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeedChannelLeaveModel : AWEFeedChannelTrackBaseModel <NSCopying> {
    NSString *_nextTabID;
    long long _leaveType;
    NSString *_leaveMethod;
    NSString *_leaveTo;
}

@property (copy, nonatomic) NSString *nextTabID;
@property (nonatomic) long long leaveType;
@property (copy, nonatomic) NSString *leaveMethod;
@property (copy, nonatomic) NSString *leaveTo;

- (void)setLeaveType:(long long)arg0;
- (void)setNextTabID:(id)arg0;
- (void)setLeaveTo:(id)arg0;
- (void)setLeaveMethod:(id)arg0;
- (long long)leaveType;
- (id)leaveMethod;
- (id)leaveTo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)nextTabID;
- (id)debugDescription;

@end
