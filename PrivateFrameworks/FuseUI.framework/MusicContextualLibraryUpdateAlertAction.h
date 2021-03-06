/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicContextualLibraryUpdateAlertAction : MusicContextualAlertAction {
    BOOL _isAddAction;
    BOOL _isKeepLocalAction;
    BOOL _isRemoveAction;
}

@property (nonatomic, readonly) BOOL isAddAction;
@property (nonatomic, readonly) BOOL isKeepLocalAction;
@property (nonatomic, readonly) BOOL isRemoveAction;

+ (void)getContextualLibraryAddAction:(id*)arg1 removeAction:(id*)arg2 keepLocalAction:(id*)arg3 forEntityValueContext:(id)arg4 overrideItemEntityProvider:(id)arg5 shouldDismissHandler:(id /* block */)arg6 additionalPresentationHandler:(id /* block */)arg7 didDismissHandler:(id /* block */)arg8;
+ (id)notificationTokenForOverrideItemEntityProvider:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;

- (BOOL)isAddAction;
- (BOOL)isKeepLocalAction;
- (BOOL)isRemoveAction;

@end
