//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveCalendarEventServiceImp : NSObject <IESLiveCalendarEventService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createCalendarEvent:(id)arg0 privacyCert:(id)arg1 withContext:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)cancelCalendarEvent:(id)arg0 privacyCert:(id)arg1 withContext:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)getCalendarEvent:(id)arg0 privacyCert:(id)arg1 withContext:(id)arg2 completionBlock:(id /* block */)arg3;

@end