//
//     Generated by private class-dump
//

@class NSString, UIImage, NSDictionary;

@interface AWEShareCustomChannel : AWEShareBaseChannel {
    NSString *_shareType;
    long long _shareCategory;
    NSString *_shareTitle;
    UIImage *_shareImage;
    NSDictionary *_shareImages;
    id /* block */ _shareImageProvider;
    id /* block */ _itemEventsHandler;
    id /* block */ _shareHandler;
    id /* block */ _asyncShareHandler;
    id /* block */ _preparationHandler;
    id /* block */ _asyncPreparationHandler;
}

@property (copy, nonatomic) NSString *shareTitle;
@property (retain, nonatomic) UIImage *shareImage;
@property (copy, nonatomic) NSDictionary *shareImages;
@property (copy, nonatomic) id /* block */ shareImageProvider;
@property (copy, nonatomic) id /* block */ itemEventsHandler;
@property (copy, nonatomic) id /* block */ shareHandler;
@property (copy, nonatomic) id /* block */ asyncShareHandler;
@property (copy, nonatomic) id /* block */ preparationHandler;
@property (copy, nonatomic) id /* block */ asyncPreparationHandler;

- (void)setShareTitle:(id)arg0;
- (id)shareImage;
- (id)makeItemWithStyle:(unsigned long long)arg0 inView:(id)arg1;
- (BOOL)prepareToShare;
- (long long)shareCategory;
- (void)setShareImage:(id)arg0;
- (void)shareWithCompletion:(id /* block */)arg0;
- (void)prepareToShareWithCompletion:(id /* block */)arg0;
- (id)initWithType:(id)arg0 category:(long long)arg1;
- (id /* block */)shareImageProvider;
- (id)shareImages;
- (id /* block */)itemEventsHandler;
- (id /* block */)asyncPreparationHandler;
- (id /* block */)asyncShareHandler;
- (id /* block */)shareHandler;
- (void)setShareImages:(id)arg0;
- (void)setShareImageProvider:(id /* block */)arg0;
- (void)setItemEventsHandler:(id /* block */)arg0;
- (void)setShareHandler:(id /* block */)arg0;
- (void)setAsyncShareHandler:(id /* block */)arg0;
- (void)setAsyncPreparationHandler:(id /* block */)arg0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)arg0;
- (id)initWithType:(id)arg0;
- (id /* block */)preparationHandler;
- (void)setPreparationHandler:(id /* block */)arg0;
- (id)shareType;
- (id)shareTitle;

@end
