//
//     Generated by private class-dump
//

@class NSString, UIImageView;

@interface AWETeenProtectionNewStyleHomeTableHeaderView : UITableViewHeaderFooterView {
    NSString *_headerImageName;
    UIImageView *_imageView;
    long long _enterStyle;
}

@property (nonatomic) long long enterStyle;
@property (copy, nonatomic) NSString *headerImageName;
@property (retain, nonatomic) UIImageView *imageView;

+ (id)identifier;

- (void)setHeaderImageName:(id)arg0;
- (void)setEnterStyle:(long long)arg0;
- (long long)enterStyle;
- (id)headerImageName;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (id)initWithReuseIdentifier:(id)arg0;
- (void)setupUI;

@end
