//
//     Generated by private class-dump
//

@class NSArray;

@interface AWELiveAcqPlayTogetherLiveStreamResponseModel : AWEBaseApiModel {
    NSArray *_awemeList;
    NSArray *_events;
}

@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSArray *events;

+ (id)awemeListJSONTransformer;
+ (id)eventsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (id)events;
- (void).cxx_destruct;
- (void)setEvents:(id)arg0;

@end
