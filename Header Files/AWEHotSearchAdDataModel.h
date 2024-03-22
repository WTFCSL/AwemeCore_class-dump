//
//     Generated by private class-dump
//

@class NSString, NSArray, NSNumber, AWEURLModel;

@interface AWEHotSearchAdDataModel : MTLModel <MTLJSONSerializing> {
    BOOL _isPreview;
    NSNumber *_creativeID;
    NSString *_logExtra;
    AWEURLModel *_clickTrackURLList;
    AWEURLModel *_trackURLList;
    NSArray *_itemIDList;
}

@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) AWEURLModel *clickTrackURLList;
@property (retain, nonatomic) AWEURLModel *trackURLList;
@property (nonatomic) BOOL isPreview;
@property (retain, nonatomic) NSArray *itemIDList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clickTrackURLListJSONTransformer;
+ (id)trackUrlListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)clickTrackURLList;
- (void)setCreativeID:(id)arg0;
- (id)trackURLList;
- (void)setTrackURLList:(id)arg0;
- (void)setClickTrackURLList:(id)arg0;
- (id)itemIDList;
- (void)setItemIDList:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isPreview;
- (void)setIsPreview:(BOOL)arg0;
- (id)creativeID;

@end