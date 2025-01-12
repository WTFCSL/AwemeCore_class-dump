//
//     Generated by private class-dump
//

@class NSString;
@protocol IESVSMessageFilter, IESLiveUserService;

@interface IESVSMessageFakedFilter : HTSLiveMessageFakedFilter <IESVSMessageFilter> {
    id<IESLiveUserService> _userService;
    id<IESVSMessageFilter> nextFilter;
}

@property (retain, nonatomic) id<IESVSMessageFilter> nextFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)doFilter:(id)arg0;
- (id)nextFilter;
- (void)setNextFilter:(id)arg0;
- (void).cxx_destruct;

@end
