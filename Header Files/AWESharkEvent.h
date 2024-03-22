//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWESharkEvent : NSObject {
    NSString *_eventName;
    NSDictionary *_params;
    NSString *_scene;
}

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *scene;

+ (id)eventWithEventName:(id)arg0 scene:(id)arg1 params:(id)arg2;

- (id)initWithEventName:(id)arg0 scene:(id)arg1 params:(id)arg2;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (void)setEventName:(id)arg0;
- (id)params;
- (id)eventName;
- (id)scene;
- (void)setParams:(id)arg0;

@end