//
//     Generated by private class-dump
//

@class NSString, AWELandscapeLayerListModel;

@interface AWELandscapeLayerResponseModel : AWEBaseApiModel {
    AWELandscapeLayerListModel *_forwardListModel;
    AWELandscapeLayerListModel *_reverseListModel;
    NSString *_userStatus;
}

@property (retain, nonatomic) AWELandscapeLayerListModel *forwardListModel;
@property (retain, nonatomic) AWELandscapeLayerListModel *reverseListModel;
@property (copy, nonatomic) NSString *userStatus;

+ (id)forwardListModelJSONTransformer;
+ (id)reverseListModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)forwardListModel;
- (id)reverseListModel;
- (void)setForwardListModel:(id)arg0;
- (void)setReverseListModel:(id)arg0;
- (void).cxx_destruct;
- (id)userStatus;
- (void)setUserStatus:(id)arg0;

@end
