//
//     Generated by private class-dump
//

@class NSString, BDSCDeviceListTagConfigModel;
@protocol BDSCDeviceProtocol;

@interface BDSCDeviceListModel : NSObject {
    BOOL _isSelected;
    id<BDSCDeviceProtocol> _device;
    double _cellHeight;
    NSString *_cellIdentifier;
    id /* block */ _action;
    BDSCDeviceListTagConfigModel *_tagConfigModel;
}

@property (retain, nonatomic) id<BDSCDeviceProtocol> device;
@property (nonatomic) double cellHeight;
@property (copy, nonatomic) NSString *cellIdentifier;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) BDSCDeviceListTagConfigModel *tagConfigModel;

- (void)setCellIdentifier:(id)arg0;
- (id)tagConfigModel;
- (void)setTagConfigModel:(id)arg0;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setAction:(id /* block */)arg0;
- (id /* block */)action;
- (void)setDevice:(id)arg0;
- (BOOL)isSelected;
- (id)device;
- (id)cellIdentifier;
- (double)cellHeight;
- (void)setCellHeight:(double)arg0;

@end
