//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWELVideoHighLight : MTLModel <MTLJSONSerializing> {
    NSString *_highlightEpisodeId;
    NSString *_highlightItemId;
    NSNumber *_startTimeMsec;
    NSNumber *_endTimeMsec;
    NSString *_authToken;
}

@property (copy, nonatomic) NSString *highlightEpisodeId;
@property (copy, nonatomic) NSString *highlightItemId;
@property (retain, nonatomic) NSNumber *startTimeMsec;
@property (retain, nonatomic) NSNumber *endTimeMsec;
@property (copy, nonatomic) NSString *authToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)highlightEpisodeId;
- (void)setHighlightEpisodeId:(id)arg0;
- (id)highlightItemId;
- (void)setHighlightItemId:(id)arg0;
- (id)startTimeMsec;
- (void)setStartTimeMsec:(id)arg0;
- (id)endTimeMsec;
- (void)setEndTimeMsec:(id)arg0;
- (void)setAuthToken:(id)arg0;
- (id)authToken;
- (void).cxx_destruct;

@end