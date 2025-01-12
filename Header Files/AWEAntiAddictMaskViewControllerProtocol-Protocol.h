//
//     Generated by private class-dump
//

@class NSString, AWEPageContext, AWEAwemeModel;
@protocol AWEAntiAddictMaskContextProtocol;

@protocol AWEAntiAddictMaskViewControllerProtocol <NSObject>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (readonly, nonatomic) AWEPageContext<AWEAntiAddictMaskContextProtocol> *context;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)didDisplay;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (id)model;
- (void)updateWithConfig:(id)arg0;
- (id)context;
- (void)play;
- (void)pause;
- (void)reset;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
