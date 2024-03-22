//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIImage;

@interface AWEShareChannel : NSObject <AWEShareChannelAppearance, AWEShareChannelAction> {
    long long _type;
    unsigned long long _option;
    id /* block */ _shareActionBlock;
    NSString *_title;
    NSDictionary *_channelImages;
    UIImage *_smallImage;
    NSString *_label;
}

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long option;
@property (copy, nonatomic) id /* block */ shareActionBlock;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *channelImages;
@property (retain, nonatomic) UIImage *smallImage;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)shareActionBlock;
- (void)setShareActionBlock:(id /* block */)arg0;
- (id)imageForStyleOption:(unsigned long long)arg0;
- (BOOL)shareWithContext:(id)arg0;
- (id)initWithType:(long long)arg0 option:(unsigned long long)arg1;
- (id)channelImages;
- (void)setChannelImages:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)type;
- (void)setLabel:(id)arg0;
- (id)title;
- (void)setType:(long long)arg0;
- (id)label;
- (void)setOption:(unsigned long long)arg0;
- (void)setTitle:(id)arg0;
- (id)smallImage;
- (void)setSmallImage:(id)arg0;
- (unsigned long long)option;

@end
