//
//     Generated by private class-dump
//

@class NSArray, IESGCPGetXplayResolutionInfoCurResolutionModel;

@interface IESGCPGetXplayResolutionInfoDataModel : IESLiveBridgeModel {
    NSArray *_resolutionList;
    IESGCPGetXplayResolutionInfoCurResolutionModel *_curResolution;
}

@property (copy, nonatomic) NSArray *resolutionList;
@property (retain, nonatomic) IESGCPGetXplayResolutionInfoCurResolutionModel *curResolution;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (id)resolutionList;
- (void)setResolutionList:(id)arg0;
- (id)curResolution;
- (void)setCurResolution:(id)arg0;
- (void).cxx_destruct;

@end