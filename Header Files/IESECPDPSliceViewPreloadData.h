//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIView;

@interface IESECPDPSliceViewPreloadData : IESECBaseApiModel {
    NSString *_sliceID;
    NSString *_templateURL;
    NSDictionary *_data;
    UIView *_preloadView;
}

@property (copy, nonatomic) NSString *sliceID;
@property (copy, nonatomic) NSString *templateURL;
@property (copy, nonatomic) NSDictionary *data;
@property (retain, nonatomic) UIView *preloadView;

+ (id)JSONKeyPathsByPropertyKey;

- (id)sliceID;
- (void)setSliceID:(id)arg0;
- (id)preloadView;
- (void)setPreloadView:(id)arg0;
- (id)data;
- (id)templateURL;
- (void).cxx_destruct;
- (void)setTemplateURL:(id)arg0;
- (void)setData:(id)arg0;

@end
