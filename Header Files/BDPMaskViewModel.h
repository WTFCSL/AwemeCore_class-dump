//
//     Generated by private class-dump
//

@class BDPMaskViewPositon, BDPMaskViewStyle;

@interface BDPMaskViewModel : NSObject {
    unsigned long long _viewID;
    BDPMaskViewPositon *_position;
    BDPMaskViewStyle *_style;
}

@property (nonatomic) unsigned long long viewID;
@property (retain, nonatomic) BDPMaskViewPositon *position;
@property (retain, nonatomic) BDPMaskViewStyle *style;

- (id)style;
- (void).cxx_destruct;
- (id)position;
- (void)setPosition:(id)arg0;
- (unsigned long long)viewID;
- (void)setStyle:(id)arg0;
- (void)setViewID:(unsigned long long)arg0;

@end
