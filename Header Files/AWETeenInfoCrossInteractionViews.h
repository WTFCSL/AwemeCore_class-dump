//
//     Generated by private class-dump
//

@class NSString;

@interface AWETeenInfoCrossInteractionViews : NSObject {
    BOOL _recorderEnterBarClosed;
    NSString *_pediaID;
    NSString *_imprId;
}

@property (nonatomic) BOOL recorderEnterBarClosed;
@property (copy, nonatomic) NSString *pediaID;
@property (copy, nonatomic) NSString *imprId;

+ (void)clearAllInfo;
+ (id)sharedInstance;

- (id)imprId;
- (void)setRecorderEnterBarClosed:(BOOL)arg0;
- (void)setPediaID:(id)arg0;
- (BOOL)recorderEnterBarClosed;
- (id)pediaID;
- (void)setImprId:(id)arg0;
- (void).cxx_destruct;

@end
