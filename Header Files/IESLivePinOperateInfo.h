//
//     Generated by private class-dump
//

@class NSNumber, NSAttributedString;

@interface IESLivePinOperateInfo : NSObject {
    BOOL _optCancelAvailable;
    NSAttributedString *_optTitleAttr;
    NSNumber *_creatorUid;
}

@property (retain, nonatomic) NSAttributedString *optTitleAttr;
@property (nonatomic) BOOL optCancelAvailable;
@property (retain, nonatomic) NSNumber *creatorUid;

- (id)creatorUid;
- (void)setCreatorUid:(id)arg0;
- (id)optTitleAttr;
- (BOOL)optCancelAvailable;
- (void)setOptTitleAttr:(id)arg0;
- (void)setOptCancelAvailable:(BOOL)arg0;
- (void).cxx_destruct;

@end
