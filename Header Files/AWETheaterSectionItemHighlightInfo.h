//
//     Generated by private class-dump
//

@class NSString;

@interface AWETheaterSectionItemHighlightInfo : MTLModel <MTLJSONSerializing> {
    NSString *_highlightEpisodeID;
    double _startTime;
    double _endTime;
}

@property (copy, nonatomic) NSString *highlightEpisodeID;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)highlightEpisodeID;
- (void)setHighlightEpisodeID:(id)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)endTime;
- (double)startTime;
- (void)setEndTime:(double)arg0;

@end
