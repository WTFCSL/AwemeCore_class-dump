//
//     Generated by private class-dump
//

@class NSString, NSError;

@interface IESLatchLoaderTriggerEvent : NSObject <IESLatchLoaderEvent> {
    double startTime;
    NSError *error;
    NSString *_occasion;
    NSString *_schema;
}

@property (copy, nonatomic) NSString *occasion;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)occasion;
- (void)setOccasion:(id)arg0;
- (void)setSchema:(id)arg0;
- (id)init;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)startTime;
- (void)setError:(id)arg0;
- (id)schema;
- (id)error;

@end
