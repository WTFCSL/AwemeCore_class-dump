//
//     Generated by private class-dump
//

@class NSNumber, NSArray;

@interface IESLivePaidPreviewVisibilityOptionsParamModel : IESLiveBridgeModel {
    BOOL _isShowNotPreviewOption;
    NSNumber *_visibleType;
    NSArray *_userList;
}

@property (nonatomic) BOOL isShowNotPreviewOption;
@property (retain, nonatomic) NSNumber *visibleType;
@property (copy, nonatomic) NSArray *userList;

+ (id)modelCustomPropertyMapper;

- (void)setUserList:(id)arg0;
- (id)visibleType;
- (void)setVisibleType:(id)arg0;
- (BOOL)isShowNotPreviewOption;
- (void)setIsShowNotPreviewOption:(BOOL)arg0;
- (void).cxx_destruct;
- (id)userList;

@end
