//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface TTAccountHttpRequest : NSObject {
    BOOL _needCommonParams;
    BOOL _follow302Redirect;
    BOOL _dispatchNote;
    BOOL _needHandlePictureVerify;
    NSString *_URLString;
    NSString *_method;
    NSDictionary *_params;
    NSDictionary *_extraGetParams;
    NSDictionary *_headerField;
    id /* block */ _callback;
}

@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *extraGetParams;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) BOOL follow302Redirect;
@property (nonatomic) BOOL dispatchNote;
@property (copy, nonatomic) NSDictionary *headerField;
@property (nonatomic) BOOL needHandlePictureVerify;
@property (copy, nonatomic) id /* block */ callback;

- (void)setNeedCommonParams:(BOOL)arg0;
- (BOOL)needCommonParams;
- (void)setHeaderField:(id)arg0;
- (id)headerField;
- (void)addExtraParams:(id)arg0;
- (id)extraGetParams;
- (BOOL)follow302Redirect;
- (BOOL)dispatchNote;
- (BOOL)needHandlePictureVerify;
- (void)setExtraGetParams:(id)arg0;
- (void)setFollow302Redirect:(BOOL)arg0;
- (void)setDispatchNote:(BOOL)arg0;
- (void)setNeedHandlePictureVerify:(BOOL)arg0;
- (id)URLString;
- (void).cxx_destruct;
- (void)setCallback:(id /* block */)arg0;
- (id)method;
- (void)setMethod:(id)arg0;
- (id /* block */)callback;
- (id)params;
- (void)setURLString:(id)arg0;
- (void)setParams:(id)arg0;

@end
