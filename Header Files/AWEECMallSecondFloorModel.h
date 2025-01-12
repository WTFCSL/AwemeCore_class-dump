//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEECMallSFSearchResultModel;

@interface AWEECMallSecondFloorModel : MTLModel <MTLJSONSerializing> {
    AWEECMallSFSearchResultModel *_searchResult;
    NSArray *_activityResults;
    NSString *_defaultColor;
    NSString *_bgURL;
}

@property (retain, nonatomic) AWEECMallSFSearchResultModel *searchResult;
@property (copy, nonatomic) NSArray *activityResults;
@property (copy, nonatomic) NSString *defaultColor;
@property (copy, nonatomic) NSString *bgURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activityResultsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)bgURL;
- (id)activityResults;
- (void)setBgURL:(id)arg0;
- (void)setActivityResults:(id)arg0;
- (void).cxx_destruct;
- (id)searchResult;
- (void)setSearchResult:(id)arg0;
- (id)defaultColor;
- (void)setDefaultColor:(id)arg0;

@end
