//
//     Generated by private class-dump
//

@class NSString;

@interface PNSUserExceptionImpl : NSObject <PNSUserExceptionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackUserExceptionWithType:(id)arg0 backtracesArray:(id)arg1 customParams:(id)arg2 filters:(id)arg3 callback:(id /* block */)arg4;
- (void)trackUserExceptionWithType:(id)arg0 title:(id)arg1 subTitle:(id)arg2 customParams:(id)arg3 filters:(id)arg4 callback:(id /* block */)arg5;

@end
