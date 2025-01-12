//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;
@protocol IESVSMessageFilter;

@interface IESVSMessageFilter : NSObject <IESVSMessageFilter> {
    NSMutableArray *_receivedMessageIDs;
    id<IESVSMessageFilter> nextFilter;
    long long _maxMessageCount;
}

@property (nonatomic) long long maxMessageCount;
@property (retain, nonatomic) id<IESVSMessageFilter> nextFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)doFilter:(id)arg0;
- (id)nextFilter;
- (void)setNextFilter:(id)arg0;
- (long long)maxMessageCount;
- (void)setMaxMessageCount:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;

@end
