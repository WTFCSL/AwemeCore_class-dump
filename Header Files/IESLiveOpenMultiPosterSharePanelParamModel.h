//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESLiveOpenMultiPosterSharePanelParamModel : IESLiveBridgeModel {
    BOOL _addRoomInfo;
    NSArray *_sharePosterList;
    NSString *_logExtra;
    NSString *_logReflowExtra;
}

@property (copy, nonatomic) NSArray *sharePosterList;
@property (nonatomic) BOOL addRoomInfo;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *logReflowExtra;

+ (id)modelCustomPropertyMapper;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)sharePosterList;
- (void)setSharePosterList:(id)arg0;
- (BOOL)addRoomInfo;
- (void)setAddRoomInfo:(BOOL)arg0;
- (id)logReflowExtra;
- (void)setLogReflowExtra:(id)arg0;
- (void).cxx_destruct;

@end
