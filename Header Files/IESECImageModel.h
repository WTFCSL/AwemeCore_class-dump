//
//     Generated by private class-dump
//

@class NSString, IESECURLModel, IESECNativeImageModel, IESECBorderConfig;

@interface IESECImageModel : MTLModel <MTLJSONSerializing> {
    IESECURLModel *_urlModel;
    double _roundCorner;
    NSString *_tintColor;
    IESECNativeImageModel *_nativeModel;
    IESECBorderConfig *_border;
}

@property (retain, nonatomic) IESECURLModel *urlModel;
@property (nonatomic) double roundCorner;
@property (copy, nonatomic) NSString *tintColor;
@property (retain, nonatomic) IESECNativeImageModel *nativeModel;
@property (retain, nonatomic) IESECBorderConfig *border;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)urlModel;
- (void)setRoundCorner:(double)arg0;
- (double)roundCorner;
- (void)setUrlModel:(id)arg0;
- (id)initWithURLModel:(id)arg0 nativeModel:(id)arg1;
- (id)nativeModel;
- (void)setNativeModel:(id)arg0;
- (void)setTintColor:(id)arg0;
- (void).cxx_destruct;
- (id)height;
- (id)tintColor;
- (void)setBorder:(id)arg0;
- (id)border;
- (id)width;

@end