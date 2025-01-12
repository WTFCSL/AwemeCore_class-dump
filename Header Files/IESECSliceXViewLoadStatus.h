//
//     Generated by private class-dump
//

@class NSError, NSString, UIView;

@interface IESECSliceXViewLoadStatus : NSObject <IESECSliceXViewLoadStatus> {
    BOOL _success;
    UIView *_sliceXView;
    NSError *_error;
}

@property (retain, nonatomic) UIView *sliceXView;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sliceXView;
- (void)setSliceXView:(id)arg0;
- (id)initWithSliceXView:(id)arg0;
- (void).cxx_destruct;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg0;
- (void)setError:(id)arg0;
- (id)error;

@end
