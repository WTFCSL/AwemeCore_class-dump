//
//     Generated by private class-dump
//

@class AWERVLVMetaInfoView;

@interface AWERVLVMetaInfoTableViewCell : UITableViewCell {
    AWERVLVMetaInfoView *_metaInfoView;
}

@property (retain, nonatomic) AWERVLVMetaInfoView *metaInfoView;

+ (double)height;

- (id)metaInfoView;
- (void)setMetaInfoView:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:(id)arg0;

@end