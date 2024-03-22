//
//     Generated by private class-dump
//

@class UIImage, NSString;

@interface AWEBarPanelVCPanelUIConfig : NSObject {
    UIImage *_panelIcon;
    NSString *_panelTitle;
    NSString *_cellClassName;
    double _cellHeight;
}

@property (retain, nonatomic) UIImage *panelIcon;
@property (copy, nonatomic) NSString *panelTitle;
@property (retain, nonatomic) NSString *cellClassName;
@property (nonatomic) double cellHeight;

+ (id)defaultWatchLaterConfig;

- (id)panelTitle;
- (void)setPanelTitle:(id)arg0;
- (void)setPanelIcon:(id)arg0;
- (void)setCellClassName:(id)arg0;
- (id)panelIcon;
- (id)cellClassName;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)setCellHeight:(double)arg0;

@end
